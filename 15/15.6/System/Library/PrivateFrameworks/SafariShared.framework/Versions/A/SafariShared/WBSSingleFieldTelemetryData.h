@class NSString;

@interface WBSSingleFieldTelemetryData : NSObject

@property (nonatomic) long long fieldType;
@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, copy, nonatomic) NSString *fieldID;
@property (nonatomic) char isAutoFilled;
@property (readonly, nonatomic) char wasPreviouslyAutoFilled;
@property (nonatomic) char isManuallyFilledByUser;
@property (nonatomic) unsigned long long modificationType;
@property (nonatomic) unsigned long long autoFillOfferedType;

- (void).cxx_destruct;
- (id)initWithFieldType:(long long)a0 fieldID:(id)a1 elementType:(unsigned long long)a2;

@end
