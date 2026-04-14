@class COConditionTask;

@interface SlowNetworkUtil : NSObject {
    COConditionTask *disableConditionTask;
    COConditionTask *selectConditionTask;
    COConditionTask *startConditionTask;
}

+ (id)readNLCProfileData:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)startTask;
- (id)disableTask;
- (id)selectTask;
- (id)setProfileForSelect:(id)a0;

@end
