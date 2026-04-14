@class NSString, NSObject;
@protocol AVCMomentsRequestDelegate;

@interface AVCMomentsRequest : NSObject

@property (nonatomic) NSObject<AVCMomentsRequestDelegate> *delegate;
@property (nonatomic) unsigned char mode;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) unsigned char mediaType;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) NSString *requesteeID;

- (void)dealloc;
- (id)description;
- (BOOL)validateWithError:(id *)a0;
- (BOOL)startWithError:(id *)a0;
- (BOOL)rejectWithError:(id *)a0;
- (id)initWithMediaType:(unsigned char)a0 requesterID:(id)a1 requesteeID:(id)a2 transactionID:(id)a3;
- (id)initWithMediaType:(unsigned char)a0 requesterID:(id)a1 requesteeID:(id)a2;
- (BOOL)endWithError:(id *)a0;

@end
