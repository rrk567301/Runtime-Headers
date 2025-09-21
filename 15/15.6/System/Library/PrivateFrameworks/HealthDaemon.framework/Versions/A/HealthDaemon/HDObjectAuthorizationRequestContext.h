@class NSArray, HKObjectAuthorizationPromptSessionMetadata;

@interface HDObjectAuthorizationRequestContext : NSObject

@property (nonatomic) char persistSession;
@property (nonatomic) char promptWithNoSamples;
@property (nonatomic) char promptWithAllSamples;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithSamples:(id)a0 metadata:(id)a1;

@end
