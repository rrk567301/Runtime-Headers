@interface _ANEOutputSetEnqueue : NSObject

@property (readonly, nonatomic) unsigned int procedureIndex;
@property (readonly, nonatomic) unsigned int setIndex;
@property (readonly, nonatomic) unsigned long long signalValue;
@property (readonly, nonatomic) char signalNotRequired;
@property (readonly, nonatomic) char isOpenLoop;

+ (id)new;
+ (id)outputSetWithProcedureIndex:(unsigned int)a0 setIndex:(unsigned int)a1 signalValue:(unsigned long long)a2 signalNotRequired:(char)a3 isOpenLoop:(char)a4;

- (id)init;
- (id)initOutputSetWithProcedureIndex:(unsigned int)a0 setIndex:(unsigned int)a1 signalValue:(unsigned long long)a2 signalNotRequired:(char)a3 isOpenLoop:(char)a4;

@end
