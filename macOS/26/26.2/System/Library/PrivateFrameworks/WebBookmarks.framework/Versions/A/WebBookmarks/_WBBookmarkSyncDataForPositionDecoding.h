@class WBSCRDTPosition;

@interface _WBBookmarkSyncDataForPositionDecoding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WBSCRDTPosition *position;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
