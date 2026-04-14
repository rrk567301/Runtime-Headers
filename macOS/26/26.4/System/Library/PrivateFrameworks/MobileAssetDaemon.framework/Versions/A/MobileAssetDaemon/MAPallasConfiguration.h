@class NSString;

@interface MAPallasConfiguration : NSObject

@property (retain) NSString *uuid;
@property (retain) NSString *uuidSelectionReason;
@property (retain) NSString *url;
@property (retain) NSString *urlSelectionReason;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)a0 reason:(id)a1;
- (id)initWithURL:(id)a0 urlReason:(id)a1 uuid:(id)a2 uuidReason:(id)a3;
- (id)initWithUUID:(id)a0 reason:(id)a1;

@end
