@class NSString, AXLTLiveTranscription;
@protocol RTTTranscriptionControllerDelegate;

@interface RTTTranscriptionController : NSObject

@property (retain, nonatomic) AXLTLiveTranscription *transcriber;
@property (weak, nonatomic) id<RTTTranscriptionControllerDelegate> delegate;
@property (retain, nonatomic) NSString *currentTranscription;
@property (retain, nonatomic) NSString *currentCallUUID;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)startTranscribingForCallUUID:(id)a0;
- (void)stopTranscribingForCallUUID:(id)a0;

@end
