@class WBSCRDTPosition;

@interface _WBBookmarkSyncDataForPositionDecoding : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WBSCRDTPosition *position;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
