@class WBSGlobalFrameIdentifier, NSNumber;

@interface ASGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding> {
    WBSGlobalFrameIdentifier *_coreFrameIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WBSGlobalFrameIdentifier *coreFrameIdentifier;
@property (readonly, nonatomic) NSNumber *webPageID;
@property (readonly, nonatomic) NSNumber *webFrameID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPageID:(id)a0 frameID:(id)a1;
- (id)initWithCoreFrameIdentifier:(id)a0;

@end
