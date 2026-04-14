@class NSString, HLCommandPacket;

@interface HLCommandEntry : NSObject

@property (retain, nonatomic) HLCommandPacket *packet;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL dump;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;

@end
