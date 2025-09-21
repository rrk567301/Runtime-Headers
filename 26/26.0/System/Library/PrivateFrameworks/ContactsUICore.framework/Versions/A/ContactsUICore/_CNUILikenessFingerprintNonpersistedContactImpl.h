@class NSString, NSArray, NSValue;

@interface _CNUILikenessFingerprintNonpersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl>

@property (readonly) long long contactType;
@property (readonly, copy) NSString *givenName;
@property (readonly, copy) NSString *middleName;
@property (readonly, copy) NSString *familyName;
@property (readonly, copy) NSArray *emailAddresses;
@property (readonly, copy) NSArray *phoneNumbers;
@property (readonly, copy) NSValue *imageDataPointer;
@property (readonly, copy) NSValue *thumbnailImageDataPointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContact:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasContactIdentifier:(id)a0;
- (id)initWithContactType:(long long)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 emailAddresses:(id)a4 phoneNumbers:(id)a5 imageData:(id)a6 thumbnailImageData:(id)a7;

@end
