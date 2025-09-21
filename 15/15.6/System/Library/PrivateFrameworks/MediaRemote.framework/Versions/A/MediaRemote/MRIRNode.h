@class NSString;

@interface MRIRNode : NSObject <MRRouteNodeRepresentable>

@property (retain, nonatomic) NSString *avOutputDeviceIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (nonatomic) char isLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeFromOutputDevice:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAVOutputDeviceID:(id)a0 isLocal:(char)a1;

@end
