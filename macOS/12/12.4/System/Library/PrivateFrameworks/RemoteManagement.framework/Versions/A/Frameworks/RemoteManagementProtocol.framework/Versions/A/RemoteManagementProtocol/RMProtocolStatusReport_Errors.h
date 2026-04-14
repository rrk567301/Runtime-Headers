@class NSSet, NSString, NSArray;

@interface RMProtocolStatusReport_Errors : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedReportKeys;

@property (copy, nonatomic) NSString *reportStatusItem;
@property (copy, nonatomic) NSArray *reportReasons;

+ (id)buildWithStatusItem:(id)a0 reasons:(id)a1;
+ (id)buildRequiredOnlyWithStatusItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)serializeWithType:(short)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;

@end
