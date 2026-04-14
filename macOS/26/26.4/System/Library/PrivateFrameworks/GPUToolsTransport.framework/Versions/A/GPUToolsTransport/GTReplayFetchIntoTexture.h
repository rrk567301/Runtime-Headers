@interface GTReplayFetchIntoTexture : GTReplayFetchInto

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned int slice;
@property (nonatomic) unsigned int level;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int plane;
@property (nonatomic) BOOL resolveMultisampleTexture;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
