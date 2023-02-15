<?php
class mahasiswa
{
    private $nama;
    private $nim;
    private $prodi;
    private $fakultas;
    private $foto;


    public function __construct($nim = "", $nama = "", $prodi = "", $fakultas = "", $foto = "")
    {
        $this->nim = $nim;
        $this->nama = $nama;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }
    public function setNama($nama)
    {
        $this->nama = $nama;
    }

    public function setNim($nim)
    {
        $this->nim = $nim;
    }

    public function setProdi($prodi)
    {
        $this->prodi = $prodi;
    }

    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    public function setFoto($foto)
    {
        $this->foto = $foto;
    }

    public function getNama()
    {
        return $this->nama;
    }

    public function getNim()
    {
        return $this->nim;
    }

    public function getProdi()
    {
        return $this->prodi;
    }

    public function getFakultas()
    {
        return $this->fakultas;
    }
    public function getFoto()
    {
        return $this->foto;
    }
}
