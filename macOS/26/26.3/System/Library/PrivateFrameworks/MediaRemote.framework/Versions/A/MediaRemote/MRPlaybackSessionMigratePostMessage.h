@class NSString, MRPlayerPath, NSDictionary, NSError, MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigratePostMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSString *setPlaybackSessionCommandID;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSError *error;

- (unsigned long long)type;
- (void)setMetrics:(id)a0;
- (id)initWithRequest:(id)a0 playerPath:(id)a1 setPlaybackSessionCommandID:(id)a2;

@end
