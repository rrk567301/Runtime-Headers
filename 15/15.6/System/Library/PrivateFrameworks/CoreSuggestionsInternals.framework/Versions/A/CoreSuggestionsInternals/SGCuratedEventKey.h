@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *externalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithExternalId:(id)a0;
- (id)initWithSerialized:(id)a0;
- (char)isEqualToCuratedEventKey:(id)a0;

@end
