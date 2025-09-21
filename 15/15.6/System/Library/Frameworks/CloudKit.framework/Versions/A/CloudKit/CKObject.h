@class NSString, CKObjCClass;

@interface CKObject : NSObject <CKPropertyCoding>

@property (readonly, nonatomic) CKObjCClass *objcClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)a0;

@end
