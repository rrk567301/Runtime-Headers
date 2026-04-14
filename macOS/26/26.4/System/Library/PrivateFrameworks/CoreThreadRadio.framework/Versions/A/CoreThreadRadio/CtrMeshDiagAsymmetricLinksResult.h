@class NSArray;

@interface CtrMeshDiagAsymmetricLinksResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char asymmetricLinkCount;
@property (readonly) NSArray *asymmetricLinks;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAsymmetricLinkCount:(unsigned char)a0 asymmetricLinks:(id)a1;

@end
