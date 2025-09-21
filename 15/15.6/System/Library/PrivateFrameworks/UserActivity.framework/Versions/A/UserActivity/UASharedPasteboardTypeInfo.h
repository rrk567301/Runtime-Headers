@class NSString, NSUUID, NSFileHandle, NSNumber;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *type;
@property (copy) NSUUID *uuid;
@property (copy) NSNumber *offset;
@property long long size;
@property (retain) NSFileHandle *dataFile;
@property char preferFileRep;
@property (copy) NSString *typeHint;
@property (copy) NSNumber *index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
