@class NSString;

@interface GEOMapSubscriptionSizeEstimationReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) long long sizeInBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isValid;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
