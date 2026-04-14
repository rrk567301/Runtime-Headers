@class COConditionTask;

@interface SlowNetworkUtil : NSObject {
    COConditionTask *disableConditionTask;
    COConditionTask *selectConditionTask;
    COConditionTask *startConditionTask;
}

+ (id)readNLCProfileData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)setProfileForSelect:(id)a0;
- (id)selectTask;
- (id)startTask;
- (id)disableTask;

@end
