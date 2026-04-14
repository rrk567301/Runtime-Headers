@class NSArray, NSMutableSet;

@interface VCMediaNegotiatorResultsAudio : NSObject {
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) BOOL allowRecording;
@property (nonatomic) BOOL allowSwitching;
@property (nonatomic) int primaryPayload;
@property (nonatomic) int dtxPayload;
@property (nonatomic) int redPayload;
@property (readonly, nonatomic) NSArray *secondaryPayloads;
@property (nonatomic) BOOL useSBR;
@property (nonatomic) long long cipherSuite;
@property (nonatomic) BOOL enableACC24ForU1;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)addSecondaryPayload:(int)a0;
- (id)initWithACC24ForU1Enabled:(BOOL)a0;

@end
