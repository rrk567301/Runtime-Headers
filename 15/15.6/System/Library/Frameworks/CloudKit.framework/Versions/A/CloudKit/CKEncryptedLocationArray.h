@class NSArray, NSString;

@interface CKEncryptedLocationArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *locationArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)value;
- (id)initWithLocationArray:(id)a0;

@end
