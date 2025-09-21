@class NSUUID, NWInterface, NWEndpoint, NSObject;
@protocol OS_nw_path_flow;

@interface NWPathFlow : NSObject <NWPrettyDescription>

@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow;
@property (readonly, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NWEndpoint *localEndpoint;
@property (readonly, nonatomic) NWEndpoint *remoteEndpoint;
@property (readonly, nonatomic) NSUUID *flowID;
@property (readonly, nonatomic) NSUUID *nexusAgent;
@property (readonly, nonatomic) NSUUID *nexusInstance;
@property (readonly, nonatomic) unsigned int nexusPort;
@property (readonly, nonatomic, getter=isViable) char viable;
@property (readonly, nonatomic, getter=isAssigned) char assigned;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic, getter=isDirect) char direct;
@property (readonly, nonatomic, getter=isDefunct) char defunct;
@property (readonly, nonatomic) char supportsIPv4;
@property (readonly, nonatomic) char supportsIPv6;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 showFullContent:(char)a1;
- (id)initWithPathFlow:(id)a0;
- (id)privateDescription;

@end
