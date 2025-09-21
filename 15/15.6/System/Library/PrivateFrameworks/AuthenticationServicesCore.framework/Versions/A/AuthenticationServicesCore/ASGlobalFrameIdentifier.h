@class NSNumber, WBSGlobalFrameIdentifier;

@interface ASGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding> {
    WBSGlobalFrameIdentifier *_coreFrameIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *webPageID;
@property (readonly, nonatomic) NSNumber *webFrameID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPageID:(id)a0 frameID:(id)a1;
- (id)initWithCoreFrameIdentifier:(id)a0;

@end
