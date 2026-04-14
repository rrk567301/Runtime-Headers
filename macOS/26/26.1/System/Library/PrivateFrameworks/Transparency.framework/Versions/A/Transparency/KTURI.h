@class NSString, NSData;

@interface KTURI : NSObject <KTRedactedDescription>

@property (retain) NSString *ktURI;
@property (retain) NSData *ktURIVRF;
@property (readonly, copy) NSString *redactedDescription;

- (void).cxx_destruct;
- (id)initWithIDSURL:(id)a0 application:(id)a1;

@end
