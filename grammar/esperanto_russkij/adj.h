/************************************************************************/
//            ��������� ��������������
/************************************************************************/
@�������
{
   @�����     _���������_������� =
               @0[pli] @0[mampli] @0[plej]
	       @0[tre] @0[tiel] @0[tro] @0[nur] @00 ;
   @�����     _���������_������� =
               @0[�����] @0[�����] @0[��������]
	       @0[�����] @0[���������] @0[�������] @0[������] @00 ;
}

@�������
{
   @�����      ��_����( ����� ����� ) =
               ����( &�����, &����� )
	       ��_����_�01( &�����, &����� )
	       ��_������( %���������, &�����, &�����, &����� )
	       ��_������( %����_����, &�����, &�����, &����� )
               ;	       
   @�����      ��_����( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ����       ( ���, ����, �����, ����� )
	       ��_����_�01( ���, ����, �����, ����� )
	       ��_������( %�����, %���������, @0, �����, %���������, ���, %����� , ����� )
	       ��_������( %�����, %���������, @0, �����, %���������, ���, %������, ����� )
               ;
}
@�������
{
   @���������  ��_����0( ����� ����� ) =
               _Ne _�������_������� ��_����( &����� ) ;
   @���������  ��_����0( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               _Ne _�������_������� ��_����( ���, ����, �����, ����� ) ;
}
@�������
{
   @���������  ��_����1( ����� ����� ) = 
               ��_����0( &����� ) @0[por] inf ;
   @���������  ��_����1( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����0( ���, ����, �����, ����� )
	       @0[�����] inf ;
}
@�������
{
   @���������  ��_����2( ����� ����� ) = 
               ��_����0( &����� ) @0[por] @0[ke] inf ;
   @���������  ��_����2( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����0( ���, ����, �����, ����� )
	       @0[�����] inf ;
}
@�������
{
   @���������  ��_����3( ����� ����� ) = 
               ��_����0( &����� ) @0[por] ��_���_� ;
   @���������  ��_����3( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����0( ���, ����, �����, ����� )
	       @0[���] ��_���_�( %� ) ;
}
@�������
{  // ������ ����� ����� �� "���_��������������3"
   @���������  ��_����4( ����� ����� ) = 
               ��_����0( &����� ) @0[ol] ��_���_� ;
   @���������  ��_����4( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����0( ���, ����, �����, ����� )
	       @0[���] ��_���_�( %� ) ;
}
@�������
{  // ------- ???
   @���������  ��_����5 = 
              _Ne @0[tia] @0[kia] �����_������ ;
   @���������  ��_����5( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _Ne
               ����[�����]( ���, ����, �����, ����� ) 
	       ����[�����]( ���, ����, �����, ����� ) 
	       �����_������ ;
}
@�������
{
   @���������  ��_����6( ����� ����� ) = 
               ��_����0( &����� ) @0[por] �����_����� ;
   @���������  ��_����6( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����0( ���, ����, �����, ����� ) �����_����� ;
}
@�������
{
   @�����     ��_����( ����� ����� ) =
	      ����_����( &�����, &����� )
	      ��_����_�01( &�����, &����� )
	      ����_����������
	      ������( %���������, �����, &�����, &����� )
	      ������( %����_����, �����, &�����, &����� )
	      ��_����0( &����� )
              ��_����1( &����� )
	      ��_����2( &����� )
	      ��_����3( &����� )
	      ��_����4( &����� )
	      ��_����5
	      ��_����6( &����� ) 
	      ;
   @�����     ��_���� ( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              ����_����  ( ���,       �����, ����� )
	      ��_����_�01( ���, ����, �����, ����� )
	      ����_����������( ����� ) // ������� ������� (�� ��������� ��������� ������)
	      ������( %�����, %���������, @0, �����, %���������, ���, %����� , ����� )
	      ������( %�����, %���������, @0, �����, %���������, ���, %������, ����� )
              ��_����0( ���, ����, �����, ����� )
	      ��_����1( ���, ����, �����, ����� )
	      ��_����2( ���, ����, �����, ����� )
	      ��_����3( ���, ����, �����, ����� )
	      ��_����4( ���, ����, �����, ����� )
	      ��_����5( ���, ����, �����, ����� )
	      ��_����6( ���, ����, �����, ����� )
	      ;
}
// ----------- ������������ �������������� ---------------------
@�������
{
   @���������  �__���_��������������_� =
              _�_���
               ��_����( %� )
	      _�__���_��������������_� ;

   @���������  �__���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _�_���
               ��_����( ���, ����, �����, ����� ) 
              _�__���_��������������_�( ���, ����, �����, ����� ) ;
}
@�������
{
   @���������  �__���_��������������_� =
              _�_���
               ��_����( %� )
	      _�__���_��������������_� ;

   @���������  �__���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
              _�_���
               ��_����( ���, ����, �����, ����� ) 
              _�__���_��������������_�(  ���, ����, �����, ����� ) ;
}

@�������
{
   @�����     _�__���_��������������_� =
               �__���_��������������_�
	       @00 ;
   @�����     _�__���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               �__���_��������������_�( ���, ����, �����, ����� )
               @00 ;
}
@�������
{
   @�����     _�__���_��������������_� =
               �__���_��������������_�
	       @00 ;
   @�����     _�__���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               �__���_��������������_�( ���, ����, �����, ����� )
               @00 ;
}

@�������
{
   @���������  ���_��������������1_� =
               ��_����( %� )
	      _�__���_��������������_� ;

   @���������  ���_��������������1_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����( ���, ����, �����, ����� )
              _�__���_��������������_�(  ���, ����, �����, ����� ) ;
}
@�������
{
   @���������  ���_��������������1_� =
               ��_����( %� )
	      _�__���_��������������_� ;

   @���������  ���_��������������1_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ��_����( ���, ����, �����, ����� )
              _�__���_��������������_�(  ���, ����, �����, ����� ) ;
}

@�������
{
   @�����     _���_��������������_� =
               ���_��������������1_�
	       @00 ;
   @�����     _���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ���_��������������1_�( ���, ����, �����, ����� )
               @00 ;
}
@�������
{
   @�����     _���_��������������_� =
               ���_��������������1_�
	       @00 ;
   @�����     _���_��������������_�( ��� &���, ���� &����, ����� &�����, ����� &����� ) =
               ���_��������������1_�( ���, ����, �����, ����� )
               @00 ;
}