/*****************************************************************
 *      This file is AUTOMATICALLY GENERATED by monsters.pl      *
 *      DO NOT EDIT IT BY HAND!                                  *
 *****************************************************************/
cur = new shMonsterIlk ("earthling", kHumanoid, NULL, kMedium, 1, 2, 10, 10, 10, 10, 10, 10, 10, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 0, 'h', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur = new shMonsterIlk ("fuel barrel", kConstruct, NULL, kSmall, 1, 0, 3, 10, 1, 1, 1, 1, 1, 10, 0, 0, 0, 1, 2, shMonster::kSitStill, 0, 4, 'b', kGray);
cur->addResistance(kMagnetic, 122);
cur->addFeat(kSessile);
cur->addFeat(kExplosive);
cur->addFeat(kNoTreasure);
cur = new shMonsterIlk ("warp fungus", kOoze, NULL, kSmall, 1, 0, 3, 7, 1, 1, 1, 1, 1, 100, 0, 0, 0, 1, 1, shMonster::kSitStill, 0, 6, 'F', kBlue);
cur->addAttack (shAttack::kSlime, kConcussive, 1, 1, 1500, 1);
cur->addFeat(kSessile);
cur->addFeat(kWarpish);
cur = new shMonsterIlk ("grid bug", kProgram, NULL, kSmall, 1, 0, 5, 6, 8, 8, 3, 9, -1, 90, 0, 0, 0, 1, 4, shMonster::kLurk, 0, 5, 'x', kMagenta);
cur->addAttack (shAttack::kZap, kElectrical, 1, 3, 1500, 1);
cur = new shMonsterIlk ("bore worm", kInsect, NULL, kTiny, 1, 0, 5, 8, 6, 8, 3, 10, 10, 80, 0, 0, 0, 1, 4, shMonster::kLurk, 0, 3, 'w', kBrown);
cur->addAttack (shAttack::kBite, kPiercing, 1, 3, 1500, 1);
cur = new shMonsterIlk ("tribble", kBeast, NULL, kFine, 1, 0, 3, 6, 3, 8, 3, 8, 8, 60, 0, 0, -1, 1, 4, shMonster::kLurk, 0, 1, 'c', kBrown);
cur->addAttack (shAttack::kBite, kPiercing, 1, 2, 1500, 1);
cur->addFeat(kNoTreasure);
cur->addIntrinsic(kMultiplier);
cur = new shMonsterIlk ("flying toaster", kProgram, NULL, kDiminutive, 1, 1, 8, 8, 5, 8, 3, 8, -1, 60, 0, 0, 1, 2, 4, shMonster::kWander, 0, 2, 'a', kCyan);
cur->addAttack (shAttack::kSmash, kConcussive, 1, 4, 1000, 1);
cur->addIntrinsic(kFlying);
cur = new shMonsterIlk ("mynock", kBeast, NULL, kSmall, 1, 1, 5, 6, 6, 10, 4, 10, 10, 80, 3, 0, 0, 1, 4, shMonster::kLurk, 0, 3, 'm', kBrown);
cur->addAttack (shAttack::kBite, kPiercing, 1, 2, 1000, 1);
cur->addIntrinsic(kFlying);
cur = new shMonsterIlk ("giant cockroach", kInsect, NULL, kSmall, 1, 1, 8, 13, 8, 8, 3, 10, 6, 50, 3, 0, 1, 1, 4, shMonster::kWander, 0, 6, 'i', kBrown);
cur->addAttack (shAttack::kBite, kPiercing, 1, 4, 500, 1);
cur->addIntrinsic(kBreathless);
cur->addFeat(kHideUnderObject);
cur = new shMonsterIlk ("man eating plant", kAberration, NULL, kMedium, 3, 1, 12, 10, 1, 1, 1, 1, 1, 100, 0, 0, 2, 1, 1, shMonster::kSitStill, 0, 3, 't', kMagenta);
cur->addAttack (shAttack::kBite, kPiercing, 2, 6, 1200, 1, kPoisonous, 1, 3);
cur->addFeat(kSessile);
cur = new shMonsterIlk ("little grey alien", kHumanoid, NULL, kMedium, 1, 1, 6, 8, 8, 14, 14, 10, 10, 100, 2, 2, 0, 1, 4, shMonster::kLurk, 0, 3, 'G', kGray);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("anal probe");
cur->addEquipment("50% d20 energy cells");
cur = new shMonsterIlk ("ratbot", kBot, NULL, kTiny, 1, 2, 8, 10, 12, 10, 4, 10, -1, 100, 0, 0, 3, 1, 1, shMonster::kWander, 0, 2, 'x', kBrown);
cur->addAttack (shAttack::kBite, kPiercing, 1, 4, 1000, 1);
cur = new shMonsterIlk ("green killer tomato", kAberration, NULL, kSmall, 1, 2, 8, 8, 10, 4, 1, 10, 4, 100, 3, 0, 0, 1, 3, shMonster::kLurk, 0, 1, 't', kGreen);
cur->addAttack (shAttack::kSmash, kConcussive, 1, 4, 1000, 1);
cur = new shMonsterIlk ("mutant human", kMutant, NULL, kMedium, 1, 2, 8, 8, 8, 8, 8, 8, 8, 100, 3, 2, 0, 1, 1, shMonster::kLurk, 0, 5, 'h', kMagenta);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addMutantPower(kHypnosis);
cur->addMutantPower(kRegeneration);
cur = new shMonsterIlk ("space goblin", kHumanoid, NULL, kSmall, 1, 2, 8, 8, 10, 10, 10, 10, 10, 100, 2, 2, 0, 1, 4, shMonster::kWander, 0, 6, 'g', kGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("10% pea shooter");
cur->addEquipment("| 15% club");
cur->addEquipment("80% 4d8 buckazoids");
cur = new shMonsterIlk ("tapioca pudding", kOoze, NULL, kMedium, 4, 2, 14, 10, 5, 5, 3, 10, 1, -300, 0, 0, 1, 1, 1, shMonster::kLurk, 0, 3, 'S', kGray);
cur->addAttack (shAttack::kSlime, kConcussive, 1, 2, 1000, 1, kParalyzing, 2, 6);
cur = new shMonsterIlk ("smart bomb", kBot, NULL, kSmall, 2, 2, 3, 10, 1, 1, 8, 8, 8, 10, 0, 0, 1, 1, 1, shMonster::kSitStill, 0, 3, 'b', kYellow);
cur->addAttack (shAttack::kExplode, kConcussive, 3, 6, 1000, 1);
cur->addFeat(kSessile);
cur->addFeat(kExplosive);
cur->addFeat(kNoTreasure);
cur = new shMonsterIlk ("catbot", kBot, NULL, kSmall, 2, 3, 12, 14, 14, 10, 7, 10, -1, 100, 0, 0, 3, 1, 1, shMonster::kWander, 50, 2, 'x', kBrightYellow);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1);
cur = new shMonsterIlk ("dogbot", kBot, NULL, kSmall, 2, 3, 14, 16, 12, 8, 7, 10, -1, 100, 0, 0, 3, 1, 1, shMonster::kWander, 50, 2, 'x', kGray);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1);
cur = new shMonsterIlk ("red killer tomato", kAberration, NULL, kSmall, 1, 3, 10, 10, 10, 4, 1, 10, 4, 100, 0, 0, 0, 1, 3, shMonster::kLurk, 0, 2, 't', kRed);
cur->addAttack (shAttack::kSmash, kConcussive, 1, 6, 1000, 1);
cur = new shMonsterIlk ("redshirt", kHumanoid, NULL, kMedium, 1, 3, 10, 10, 8, 6, 8, 8, 8, 100, 3, 2, 0, 1, 3, shMonster::kWander, 0, 6, 'h', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("phaser");
cur->addEquipment("4d20 energy cells");
cur->addEquipment("5% tricorder");
cur = new shMonsterIlk ("space orc", kHumanoid, NULL, kMedium, 2, 3, 12, 10, 10, 10, 10, 10, 8, 100, 2, 2, 0, 1, 4, shMonster::kWander, 0, 4, 'O', kBrightGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 2);
cur->addAttack (shAttack::kKick, kConcussive, 1, 6, 1000, 1);
cur->addEquipment("50% pistol");
cur->addEquipment(", 3d10 bullets");
cur->addEquipment("| 10% shotgun");
cur->addEquipment(", 1d12 shotgun shells");
cur->addEquipment("| 50% pea shooter");
cur->addEquipment("1%  ray gun");
cur = new shMonsterIlk ("alien egg", kEgg, NULL, kTiny, 1, 3, 1, 1, 1, 1, 1, 1, 1, 100, 0, 0, 0, 3, 4, shMonster::kHatch, 0, 1, 'o', kBrown);
cur->addFeat(kSessile);
cur->addFeat(kNoTreasure);
cur = new shMonsterIlk ("vat slime", kOoze, NULL, kMedium, 3, 3, 10, 10, 6, 6, 3, 10, 1, -50, 0, 0, 0, 1, 1, shMonster::kLurk, 0, 2, 'S', kGreen);
cur->addAttack (shAttack::kSmash, kConcussive, 1, 4, 1000, 1, kCorrosive, 1, 6);
cur = new shMonsterIlk ("cylon centurion", kDroid, NULL, kMedium, 2, 3, 10, 10, 8, 6, 5, 10, 10, 80, 0, 2, 2, 1, 4, shMonster::kLurk, 0, 4, 'C', kCyan);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("laser pistol");
cur->addEquipment("4d20 energy cells");
cur = new shMonsterIlk ("stormtrooper", kHumanoid, NULL, kMedium, 1, 4, 10, 10, 10, 6, 8, 10, 10, 100, 2, 2, 0, 1, 6, shMonster::kLurk, 0, 6, 'h', kWhite);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("stormtrooper suit");
cur->addEquipment("stormtrooper helmet");
cur->addEquipment("blaster");
cur->addEquipment("4d20 energy cells");
cur = new shMonsterIlk ("astromech droid", kDroid, NULL, kSmall, 3, 4, 12, 10, 8, 14, 10, 10, -1, 80, 0, 1, 3, 1, 1, shMonster::kWander, 80, 1, 'x', kBrightBlue);
cur->addAttack (shAttack::kZap, kElectrical, 1, 8, 1000, 1);
cur = new shMonsterIlk ("protocol droid", kDroid, NULL, kMedium, 3, 4, 12, 10, 8, 8, 10, 10, -1, 80, 0, 2, 3, 1, 1, shMonster::kWander, 80, 1, 'X', kYellow);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 1);
cur = new shMonsterIlk ("scrubbot", kBot, NULL, kMedium, 3, 4, 14, 10, 10, 10, 3, 10, -1, 100, 0, 0, 4, 1, 1, shMonster::kWander, 80, 1, 'x', kGreen);
cur->addAttack (shAttack::kSmash, kConcussive, 1, 6, 1000, 1);
cur = new shMonsterIlk ("crite", kBeast, NULL, kSmall, 2, 4, 10, 13, 10, 6, 9, 10, 8, 100, 0, 0, 2, 1, 6, shMonster::kLurk, 0, 2, 'c', kBlue);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 800, 3);
cur->addAttack (shAttack::kQuill, kPiercing, 1, 2, 1000, 1, kPoisonous, 1, 2);
cur = new shMonsterIlk ("high ping bastard", kHumanoid, NULL, kMedium, 2, 4, 10, 10, 8, 8, 8, 8, 8, 60, 3, 2, 0, 1, 2, shMonster::kLurk, 0, 4, 'h', kGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("flak jacket");
cur->addEquipment("90% shotgun");
cur->addEquipment(", 1d12 shotgun shells");
cur->addEquipment("| pea shooter");
cur = new shMonsterIlk ("creeping credits", kConstruct, NULL, kTiny, 3, 4, 10, 10, 8, 10, 10, 10, 10, 100, 0, 0, 2, 1, 1, shMonster::kHide, 0, 2, '$', kRed);
cur->addAttack (shAttack::kTouch, kCreditDraining, 2, 100, 1000, 1);
cur->addFeat(kMimicMoney);
cur->addEquipment("4d100 buckazoids");
cur = new shMonsterIlk ("cylon command centurion", kDroid, NULL, kMedium, 5, 5, 10, 10, 8, 6, 9, 10, 10, 80, 0, 2, 5, 1, 2, shMonster::kLurk, 0, 2, 'C', kYellow);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("laser pistol");
cur->addEquipment("4d20 energy cells");
cur = new shMonsterIlk ("klingon", kHumanoid, NULL, kMedium, 3, 5, 14, 14, 10, 10, 10, 10, 7, 100, 3, 2, 0, 1, 3, shMonster::kLurk, 0, 6, 'k', kBrown);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 1);
cur->addEquipment("flak jacket");
cur->addEquipment("20% bat'leth");
cur->addEquipment("| phaser");
cur->addEquipment(", 3d20 energy cells");
cur = new shMonsterIlk ("troubleshooter", kHumanoid, NULL, kMedium, 2, 5, 10, 10, 10, 10, 10, 10, 12, 100, 3, 2, 0, 1, 4, shMonster::kLurk, 0, 2, '@', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("75% suit of reflec armor");
cur->addEquipment("75% buggy laser pistol");
cur->addEquipment("| laser pistol");
cur->addEquipment("5% 1d2 stun grenades");
cur->addEquipment("| 5% 1d2 frag grenades");
cur->addEquipment("| 5% 1d2 concussion grenades");
cur->addEquipment("| 5% 1d2 rad grenades");
cur->addEquipment("6d20 energy cells");
cur->addEquipment("10% buggy ray gun");
cur->addEquipment("5% ray gun");
cur->addEquipment("2% buggy motion tracker");
cur = new shMonsterIlk ("cheerleader ninja", kHumanoid, NULL, kMedium, 2, 5, 12, 12, 18, 10, 6, 6, 16, 100, 1, 2, 0, 1, 4, shMonster::kLurk, 0, 1, 'N', kGray);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 500, 1);
cur->addAttack (shAttack::kKick, kConcussive, 1, 6, 500, 1);
cur->addEquipment("10% katana");
cur = new shMonsterIlk ("borg", kCyborg, NULL, kMedium, 2, 5, 14, 14, 8, 12, 6, 10, 6, 80, 3, 2, 1, 1, 4, shMonster::kLurk, 0, 2, 'B', kBrightBlue);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 1);
cur->addEquipment("phaser");
cur->addEquipment("3d20 energy cells");
cur = new shMonsterIlk ("facehugger", kAlien, NULL, kTiny, 1, 5, 12, 12, 8, 10, 6, 10, 8, 100, 0, 0, 0, 1, 1, shMonster::kWander, 0, 1, 'f', kBrown);
cur->addAttack (shAttack::kFaceHug, kFaceHugging, 1, 1, 1000, 1);
cur->addFeat(kNoTreasure);
cur = new shMonsterIlk ("radbeetle", kInsect, NULL, kMedium, 3, 5, 14, 12, 8, 8, 3, 10, 10, 100, 0, 0, 2, 1, 3, shMonster::kLurk, 0, 3, 'i', kGreen);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1, kPoisonous, 1, 2);
cur = new shMonsterIlk ("space orc boss", kHumanoid, NULL, kMedium, 4, 5, 14, 12, 10, 10, 12, 10, 10, 100, 2, 2, 0, 1, 4, shMonster::kLurk, 0, 3, 'O', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 750, 1);
cur->addEquipment("flak jacket");
cur->addEquipment("30% shotgun");
cur->addEquipment(", 3d12 shotgun shells");
cur->addEquipment("| laser rifle");
cur->addEquipment(", 4d20 energy cells");
cur->addEquipment("10% ray gun");
cur = new shMonsterIlk ("chestburster", kAlien, NULL, kSmall, 3, 5, 16, 12, 10, 10, 14, 10, 10, 100, 2, 0, 4, 1, 1, shMonster::kLurk, 0, 1, 'c', kRed);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 6, 750, 2);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1);
cur->addIntrinsic(kAcidBlood);
cur = new shMonsterIlk ("alien princess", kAlien, NULL, kSmall, 5, 6, 16, 12, 10, 10, 14, 10, 10, 100, 1, 0, 4, 1, 1, shMonster::kLurk, 0, 1, 'A', kMagenta);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 6, 500, 2);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1);
cur->addIntrinsic(kAcidBlood);
cur = new shMonsterIlk ("recognizer", kProgram, NULL, kLarge, 8, 6, 14, 12, 10, 8, 3, 10, -1, 50, 0, 0, 4, 1, 2, shMonster::kWander, 0, 1, 'r', kBrightBlue);
cur->addAttack (shAttack::kSmash, kConcussive, 3, 6, 1000, 1);
cur->addIntrinsic(kFlying);
cur = new shMonsterIlk ("radspider", kInsect, NULL, kMedium, 4, 6, 16, 12, 10, 8, 3, 10, 10, 100, 1, 0, 2, 1, 1, shMonster::kLurk, 0, 4, 'i', kRed);
cur->addAttack (shAttack::kBite, kPiercing, 1, 6, 1000, 1, kPoisonous, 1, 3);
cur = new shMonsterIlk ("klingon captain", kHumanoid, NULL, kMedium, 6, 6, 16, 16, 12, 12, 12, 10, 7, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 3, 'k', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("flak jacket");
cur->addEquipment("70% bat'leth");
cur->addEquipment("phaser");
cur->addEquipment("3d20 energy cells");
cur->addEquipment("15% ray gun");
cur = new shMonsterIlk ("pink horror", kAberration, NULL, kMedium, 6, 6, 18, 12, 10, 8, 3, 10, 10, 100, 0, 0, 2, 1, 3, shMonster::kLurk, 0, 3, 'd', kBrightMagenta);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur = new shMonsterIlk ("mi-go", kAberration, NULL, kMedium, 4, 6, 10, 10, 9, 9, 14, 14, 14, 100, 0, 2, 1, 1, 2, shMonster::kWander, 0, 1, 'F', kMagenta);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 6, 1000, 1);
cur->addAttack (shAttack::kExtractBrain, kBrainExtracting, 1, 6, 1000, 1);
cur->addEquipment("50% brain cylinder");
cur->addFeat(kWarpish);
cur = new shMonsterIlk ("smart missile", kDroid, NULL, kMedium, 4, 7, 3, 10, 1, 1, 4, 4, 10, 100, 0, 0, 2, 1, 1, shMonster::kWander, 0, 3, 'b', kRed);
cur->addAttack (shAttack::kExplode, kConcussive, 3, 6, 1000, 1);
cur->addFeat(kExplosive);
cur->addFeat(kNoTreasure);
cur->addIntrinsic(kFlying);
cur = new shMonsterIlk ("klingon commander", kHumanoid, NULL, kMedium, 7, 7, 17, 17, 13, 14, 14, 12, 8, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 2, 'k', kMagenta);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 750, 1);
cur->addEquipment("+2 flak jacket");
cur->addEquipment("30% +2 bat'leth");
cur->addEquipment("+2 phaser");
cur->addEquipment("3d20 energy cells");
cur->addEquipment("25% ray gun");
cur = new shMonsterIlk ("usenet troll", kHumanoid, NULL, kMedium, 6, 7, 18, 15, 10, 8, 6, 10, 3, 100, 2, 2, 2, 1, 1, shMonster::kWander, 0, 1, 'T', kGray);
cur->addAttack (shAttack::kPunch, kConcussive, 2, 6, 750, 2);
cur->addAttack (shAttack::kHeadButt, kConcussive, 2, 6, 1000, 1);
cur->addIntrinsic(kAutoRegeneration);
cur->addEquipment("50% buggy computer");
cur->addEquipment("| 50% computer");
cur->addEquipment("60% floppy disk");
cur->addEquipment("50% floppy disk");
cur->addEquipment("40% floppy disk");
cur->addEquipment("30% floppy disk");
cur->addEquipment("5% cracked floppy disk");
cur = new shMonsterIlk ("low ping bastard", kHumanoid, NULL, kMedium, 7, 7, 10, 10, 10, 15, 10, 10, 10, 125, 3, 2, 0, 1, 2, shMonster::kWander, 0, 4, 'h', kCyan);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("40% +2 flak jacket");
cur->addEquipment("| 40% +1 flak jacket");
cur->addEquipment("| 40% +3 flak jacket");
cur->addEquipment("| flak jacket");
cur->addEquipment("shotgun");
cur->addEquipment(", 1d12 shotgun shells");
cur->addEquipment("90% railgun");
cur->addEquipment(", 1d12 railgun slugs");
cur = new shMonsterIlk ("space elf", kHumanoid, NULL, kMedium, 6, 7, 10, 10, 16, 16, 12, 16, 14, 100, 3, 2, 0, 1, 4, shMonster::kWander, 0, 5, 'E', kGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("elven jumpsuit");
cur->addEquipment("laser pistol");
cur->addEquipment("+1 elven dagger");
cur->addEquipment("15% ray gun");
cur->addEquipment("4d10 energy cells");
cur = new shMonsterIlk ("mutant ninja turtle", kMutant, NULL, kMedium, 8, 8, 16, 14, 16, 12, 10, 12, 14, 100, 3, 2, 3, 1, 4, shMonster::kLurk, 0, 2, 'N', kGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 500, 1);
cur->addAttack (shAttack::kKick, kConcussive, 1, 6, 1000, 1);
cur->addEquipment("50% katana");
cur->addEquipment("| 25% pair of nunchucks");
cur->addEquipment("15% ray gun");
cur = new shMonsterIlk ("cyborg ninja", kCyborg, NULL, kMedium, 7, 8, 15, 13, 14, 16, 12, 14, 6, 125, 3, 2, 1, 1, 3, shMonster::kWander, 0, 1, 'N', kBrightBlue);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 500, 1);
cur->addEquipment("chameleon suit");
cur->addEquipment("90% katana");
cur->addEquipment("| light saber");
cur = new shMonsterIlk ("radscorpion", kInsect, NULL, kLarge, 6, 8, 16, 12, 10, 8, 3, 10, 10, 100, 3, 0, 3, 1, 3, shMonster::kLurk, 0, 4, 'i', kMagenta);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 4, 500, 3);
cur->addAttack (shAttack::kSting, kPiercing, 2, 4, 1000, 1, kPoisonous, 1, 4);
cur->addAttack (shAttack::kBite, kPiercing, 1, 4, 750, 1);
cur = new shMonsterIlk ("killer rabbit", kBeast, NULL, kSmall, 6, 8, 18, 12, 20, 10, 14, 10, 10, 150, 3, 0, 0, 1, 1, shMonster::kLurk, 0, 0, 'q', kWhite);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 2);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 1000, 1);
cur->addMutantPower(kTerrify);
cur = new shMonsterIlk ("alien warrior", kAlien, NULL, kLarge, 7, 8, 22, 12, 12, 10, 14, 10, 10, 100, 3, 0, 4, 1, 4, shMonster::kWander, 0, 6, 'A', kRed);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 6, 1000, 1);
cur->addFeat(kHideUnderObject);
cur->addIntrinsic(kAcidBlood);
cur = new shMonsterIlk ("tall grey alien", kHumanoid, NULL, kMedium, 6, 8, 8, 8, 18, 14, 16, 12, 16, 100, 2, 2, 0, 1, 4, shMonster::kLurk, 0, 3, 'G', kWhite);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addEquipment("anal probe");
cur->addEquipment("50% d20 energy cells");
cur->addMutantPower(kTelepathyPower);
cur->addMutantPower(kHypnosis);
cur->addMutantPower(kRegeneration);
cur = new shMonsterIlk ("space elf lord", kHumanoid, NULL, kMedium, 7, 9, 10, 10, 18, 18, 12, 16, 14, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 3, 'E', kRed);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("+1 elven dagger");
cur->addEquipment("50% elven jumpsuit");
cur->addEquipment("| elven space suit");
cur->addEquipment("laser rifle");
cur->addEquipment("15% light saber");
cur->addEquipment("| katana");
cur->addEquipment("25% ray gun");
cur->addEquipment("5d10 energy cells");
cur = new shMonsterIlk ("aquamarine marine", kHumanoid, NULL, kMedium, 7, 9, 16, 16, 12, 18, 14, 12, 10, 100, 3, 2, 0, 1, 5, shMonster::kLurk, 0, 4, '@', kBrightCyan);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 750, 1);
cur->addEquipment("20% pulse rifle");
cur->addEquipment(", 6d10 bullets");
cur->addEquipment("| assault pistol");
cur->addEquipment(", 2d10 bullets");
cur->addEquipment(", chainsaw");
cur->addEquipment("suit of aquamarine power armor");
cur->addEquipment("40% 4d10 energy cells");
cur = new shMonsterIlk ("monolith", kConstruct, NULL, kLarge, 10, 9, 12, 20, 1, 8, 18, 18, 18, 100, 0, 0, 0, 1, 1, shMonster::kSitStill, 100, 0, 'M', kBlack);
cur->addAttack (shAttack::kSmash, kConcussive, 5, 8, 1000, 1);
cur->addFeat(kSessile);
cur->addIntrinsic(kScary);
cur->addMutantPower(kTerrify);
cur->addMutantPower(kRegeneration);
cur = new shMonsterIlk ("lawyer", kHumanoid, NULL, kMedium, 7, 9, 10, 10, 18, 14, 10, 10, 15, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 1, 'L', kYellow);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 3, 1000, 1);
cur->addMutantPower(kTelepathyPower);
cur->addMutantPower(kTeleport);
cur->addMutantPower(kCeaseAndDesist);
cur->addMutantPower(kSeizeEvidence);
cur->addMutantPower(kSueForDamages);
cur->addMutantPower(kSummonWitness);
cur = new shMonsterIlk ("clerkbot", kBot, NULL, kMedium, 10, 10, 16, 10, 10, 10, 10, 10, 12, 125, 0, 2, 5, 1, 1, shMonster::kShopKeep, 100, 0, 'X', kWhite);
cur->addAttack (shAttack::kZap, kElectrical, 2, 6, 1000, 1, kStunning, 1, 6);
cur->addAttack (shAttack::kZap, kElectrical, 2, 6, 1000, 3);
cur->addEquipment("6d1000 buckazoids");
cur->addEquipment("1d3 canisters of beer");
cur->addEquipment("25% shield belt");
cur->addEquipment(", 4d50 energy cells");
cur = new shMonsterIlk ("docbot", kBot, NULL, kMedium, 10, 10, 16, 10, 10, 10, 10, 10, 12, 100, 0, 2, 5, 1, 1, shMonster::kDoctor, 100, 0, 'X', kGreen);
cur->addAttack (shAttack::kSmash, kConcussive, 2, 4, 1000, 1);
cur->addAttack (shAttack::kAnalProbe, kViolating, 10, 10, 1000, 1);
cur->addEquipment("2d1000 buckazoids");
cur->addEquipment("1d3 canisters of beer");
cur->addEquipment("50% 1d2 canisters of Rad-Away");
cur->addEquipment("50% 1d2 canisters of Healing");
cur->addEquipment("50% canister of Full Healing");
cur->addEquipment("50% 1d2 canisters of Restoration");
cur = new shMonsterIlk ("mean green marine", kHumanoid, NULL, kMedium, 9, 11, 18, 16, 12, 18, 14, 12, 10, 100, 3, 2, 0, 2, 3, shMonster::kLurk, 0, 4, '@', kBrightGreen);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 750, 1);
cur->addEquipment("50% pulse rifle");
cur->addEquipment(", 8d10 bullets");
cur->addEquipment("| assault pistol");
cur->addEquipment(", 2d10 bullets");
cur->addEquipment(", chainsaw");
cur->addEquipment("suit of mean green power armor");
cur->addEquipment("40% 4d10 energy cells");
cur->addEquipment("40% canister of healing");
cur->addEquipment("40% canister of restoration");
cur = new shMonsterIlk ("50 foot woman", kMutant, NULL, kHuge, 10, 11, 30, 12, 10, 6, 10, 10, 12, 50, 1, 0, 2, 1, 1, shMonster::kWander, 0, 1, 'H', kYellow);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 750, 2);
cur->addAttack (shAttack::kKick, kConcussive, 1, 8, 1000, 2);
cur->addAttack (shAttack::kCrush, kConcussive, 1, 8, 1000, 1);
cur = new shMonsterIlk ("space elf queen", kHumanoid, NULL, kMedium, 8, 11, 10, 10, 18, 14, 12, 16, 18, 100, 3, 2, 0, 1, 1, shMonster::kWander, 0, 3, 'E', kMagenta);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 4, 1000, 1);
cur->addEquipment("50% elven jumpsuit");
cur->addEquipment("| 50% energy dome");
cur->addEquipment("elven space suit");
cur->addEquipment("50% light saber");
cur->addEquipment("| optimized katana");
cur->addEquipment("2d10 energy cells");
cur->addMutantPower(kHypnosis);
cur->addMutantPower(kTerrify);
cur->addMutantPower(kTelepathyPower);
cur->addMutantPower(kRegeneration);
cur->addMutantPower(kTeleport);
cur = new shMonsterIlk ("alien queen", kAlien, NULL, kLarge, 12, 13, 25, 16, 12, 10, 18, 15, 10, 100, 1, 0, 5, 1, 1, shMonster::kLurk, 0, 1, 'A', kBrightMagenta);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur->addAttack (shAttack::kTailSlap, kConcussive, 1, 8, 1000, 1);
cur->addIntrinsic(kAcidBlood);
cur = new shMonsterIlk ("dalek", kCyborg, NULL, kMedium, 10, 13, 16, 12, 10, 14, 16, 16, 8, 100, 0, 0, 10, 1, 3, shMonster::kLurk, 0, 2, 'D', kBrown);
cur->addAttack (shAttack::kSmash, kConcussive, 2, 4, 1000, 1);
cur->addRangedAttack (shAttack::kLaser, shAttack::kBeam, kLaser, 8, 6, 1000, 6, 3);
cur->addIntrinsic(kShielded);
cur->addEquipment("100 energy cells");
cur = new shMonsterIlk ("warbot", kBot, NULL, kMedium, 12, 14, 22, 10, 12, 10, 10, 10, 8, 125, 0, 2, 8, 1, 1, shMonster::kLurk, 0, 1, 'X', kBrightRed);
cur->addAttack (shAttack::kSmash, kConcussive, 2, 4, 1000, 1);
cur->addEquipment("laser cannon");
cur->addEquipment("200 energy cells");
cur->addEquipment("ray gun");
cur = new shMonsterIlk ("security droid", kBot, NULL, kMedium, 12, 14, 22, 10, 12, 10, 10, 10, 8, 125, 0, 2, 8, 1, 1, shMonster::kLurk, 0, 0, 'X', kRed);
cur->addAttack (shAttack::kSmash, kConcussive, 2, 4, 1000, 1);
cur->addEquipment("laser cannon");
cur->addEquipment("200 energy cells");
cur->addEquipment("ray gun");
cur = new shMonsterIlk ("guardbot", kBot, NULL, kMedium, 14, 14, 22, 10, 12, 10, 10, 10, 8, 125, 0, 2, 8, 1, 1, shMonster::kGuard, 100, 0, 'X', kBrightYellow);
cur->addAttack (shAttack::kSmash, kConcussive, 2, 4, 1000, 1);
cur->addEquipment("laser cannon");
cur->addEquipment("400 energy cells");
cur->addEquipment("80% ray gun");
cur = new shMonsterIlk ("giant ape", kMutant, NULL, kHuge, 14, 14, 35, 15, 10, 4, 8, 8, 10, 50, 3, 0, 5, 1, 1, shMonster::kWander, 0, 2, 'H', kBrightBlue);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 750, 4);
cur->addAttack (shAttack::kKick, kConcussive, 1, 6, 1000, 1);
cur = new shMonsterIlk ("Bastard Operator From Hell", kHumanoid, NULL, kMedium, 14, 15, 12, 12, 12, 12, 18, 18, 18, 100, 2, 2, 0, 1, 1, shMonster::kLurk, 0, 0, '@', kWhite);
cur->addFeat(kUniqueMonster);
cur->addMutantPower(kTeleport);
cur->addMutantPower(kOpticBlast);
cur->addMutantPower(kHypnosis);
cur->addMutantPower(kDarkness);
cur->addMutantPower(kTelepathyPower);
cur->addEquipment("ray gun");
cur->addEquipment("pea shooter");
cur->addEquipment("+2 ordinary jumpsuit");
cur->addEquipment("+1 suit of reflec armor");
cur->addEquipment("Eye of the BOFH");
cur->addEquipment("computer");
cur->addEquipment("cracked floppy disk");
cur->addEquipment("75% floppy disk");
cur->addEquipment("75% floppy disk");
cur = new shMonsterIlk ("mail daemon", kProgram, NULL, kLarge, 12, 16, 25, 16, 14, 14, 10, 15, 10, 100, 0, 0, 7, 1, 1, shMonster::kWander, 0, 1, 'U', kGreen);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur->addRangedAttack (shAttack::kBreatheViruses, shAttack::kBeam, kSickening, 6, 6, 1000, 6, 3);
cur = new shMonsterIlk ("bind daemon", kProgram, NULL, kLarge, 12, 16, 25, 16, 14, 14, 10, 15, 10, 100, 0, 0, 7, 1, 1, shMonster::kWander, 0, 1, 'U', kYellow);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur->addRangedAttack (shAttack::kBreatheBugs, shAttack::kBeam, kBugging, 6, 6, 1000, 6, 3);
cur = new shMonsterIlk ("nntp daemon", kProgram, NULL, kLarge, 13, 17, 25, 16, 14, 14, 10, 15, 10, 100, 0, 0, 7, 1, 1, shMonster::kWander, 0, 1, 'U', kRed);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur->addRangedAttack (shAttack::kBreatheFire, shAttack::kBeam, kBurning, 6, 6, 1000, 6, 3);
cur = new shMonsterIlk ("ftp daemon", kProgram, NULL, kLarge, 13, 17, 25, 16, 14, 14, 10, 15, 10, 100, 0, 0, 7, 1, 1, shMonster::kWander, 0, 1, 'U', kWhite);
cur->addAttack (shAttack::kClaw, kSlashing, 1, 8, 500, 3);
cur->addAttack (shAttack::kBite, kPiercing, 2, 8, 750, 1);
cur->addRangedAttack (shAttack::kBreatheTraffic, shAttack::kBeam, kHosing, 6, 6, 1000, 6, 3);
cur = new shMonsterIlk ("T-1000", kCyborg, NULL, kMedium, 20, 20, 25, 18, 14, 14, 18, 10, 10, 100, 0, 2, 8, 1, 1, shMonster::kWander, 0, 1, 'T', kCyan);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 500, 3);
cur->addAttack (shAttack::kStab, kPiercing, 2, 8, 1000, 3);
cur->addFeat(kMimicObject);
cur->addIntrinsic(kAutoRegeneration);
cur = new shMonsterIlk ("agent", kProgram, NULL, kMedium, 20, 22, 40, 14, 40, 14, 18, 10, 10, 150, 3, 2, 0, 1, 3, shMonster::kWander, 0, 1, 'P', kBrightMagenta);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 3);
cur->addAttack (shAttack::kPunch, kConcussive, 1, 6, 1000, 3);
cur->addAttack (shAttack::kKick, kConcussive, 1, 8, 1000, 1);
cur->addIntrinsic(kAutoRegeneration);
