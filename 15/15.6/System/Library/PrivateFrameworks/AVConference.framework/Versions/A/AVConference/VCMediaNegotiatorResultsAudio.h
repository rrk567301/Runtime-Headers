@class NSArray, NSMutableSet;

@interface VCMediaNegotiatorResultsAudio : NSObject {
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) char allowRecording;
@property (nonatomic) char allowSwitching;
@property (nonatomic) int primaryPayload;
@property (nonatomic) int dtxPayload;
@property (nonatomic) int redPayload;
@property (readonly, nonatomic) NSArray *secondaryPayloads;
@property (nonatomic) char useSBR;
@property (nonatomic) long long cipherSuite;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void)addSecondaryPayload:(int)a0;

@end
