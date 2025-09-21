@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey> {
    NSString *_serialized;
}

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)alternativeKeysForEventKitQuery;
- (id)initWithGloballyUniqueId:(id)a0;
- (id)initWithSerialized:(id)a0;
- (char)isDropoff;
- (char)isEqualToPseudoEventKey:(id)a0;
- (id)keyForEventKitQuery;

@end
