#pragma once

//---------------------------------------------------------------------------------------
//�g�����̐���       : ���̗񋓑̂̓V�[���N���X�����ʂ���񋓒萔��񋓂��܂��B
//                   : �V�����V�[���N���X���쐬�������͑Ή�����񋓒萔��ǉ����Ă��������B
//                   : NextSceneInfo::NextSceneInfo_m�ɑ�����܂��B
//---------------------------------------------------------------------------------------

namespace scenetest {

enum class TestSceneID : int
{
	NULL_SCENE,           //�Q�[�����I�����܂��B

	//�����ɐV���ɍ쐬�����V�[���N���X�ɑΉ�����񋓒萔��ǉ����Ă�������

	SCENE_A,
	SCENE_B,
	SCENE_C,
};

}