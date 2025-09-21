@class NSMutableArray;

@interface TRIPBMessageOptions : TRIPBMessage

@property (nonatomic) char messageSetWireFormat;
@property (nonatomic) char hasMessageSetWireFormat;
@property (nonatomic) char noStandardDescriptorAccessor;
@property (nonatomic) char hasNoStandardDescriptorAccessor;
@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (nonatomic) char mapEntry;
@property (nonatomic) char hasMapEntry;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
