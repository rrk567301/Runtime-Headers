@class NSNumber, NSString, NSUUID;

@interface CKSQLiteTOCImageInfoEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *imageID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *uuid;

+ (Class)tableClass;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageName:(const char *)a0 uuid:(unsigned char[16])a1;
- (id)initWithSharedCache;

@end
