@class NSNumber, NSUUID;

@interface WBSGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *webPageID;
@property (readonly, nonatomic) NSNumber *webFrameID;
@property (readonly, copy, nonatomic) NSUUID *documentID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDocumentID:(id)a0;
- (id)initWithPageID:(id)a0 frameID:(id)a1;

@end
