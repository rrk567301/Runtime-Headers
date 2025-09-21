@class NSArray, NSString;

@interface CHSReaperResult : NSObject <NSSecureCoding, BSXPCSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *proposedURLs;
@property (readonly, copy, nonatomic) NSArray *protectedURLs;
@property (readonly, copy, nonatomic) NSArray *deletedURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProposedURLs:(id)a0 protectedURLs:(id)a1 deletedURLs:(id)a2;

@end
