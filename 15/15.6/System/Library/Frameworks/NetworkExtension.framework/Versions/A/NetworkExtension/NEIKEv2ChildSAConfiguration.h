@class NSArray;

@interface NEIKEv2ChildSAConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSArray *_proposals;
}

@property unsigned long long mode;
@property unsigned int replayWindowSize;
@property char sequencePerTrafficClass;
@property char preferInitiatorProposalOrder;
@property char opportunisticPFS;
@property (retain, nonatomic) NSArray *proposals;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
