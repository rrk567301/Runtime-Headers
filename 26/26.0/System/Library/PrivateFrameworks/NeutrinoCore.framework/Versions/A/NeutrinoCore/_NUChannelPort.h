@class NSHashTable, NSString, NSArray, NUChannelData, _NUPipeline, NUChannelFormat, NUChannelExpression, NUChannel;
@protocol NUChannelOutputPort;

@interface _NUChannelPort : NSObject <NUChannelInputPort, NUChannelOutputPort> {
    NSHashTable *_outputPorts;
    NSHashTable *_subports;
    NSString *_fullName;
}

@property (nonatomic) _NUPipeline *pipeline;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) unsigned long long inputConnectionCount;
@property (readonly, nonatomic) unsigned long long outputConnectionCount;
@property (retain, nonatomic) NUChannelData *data;
@property (retain, nonatomic) NUChannelExpression *expression;
@property (retain, nonatomic) NUChannelFormat *specializedInputFormat;
@property (retain, nonatomic) NUChannelFormat *specializedOutputFormat;
@property (readonly, nonatomic) _NUChannelPort *elementSubport;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) _NUChannelPort *inputPort;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL hasConnectedSubport;
@property (readonly, nonatomic) BOOL hasConnectedSuperport;
@property (readonly, nonatomic) BOOL hasConnections;
@property (readonly, nonatomic) BOOL hasSubConnections;
@property (readonly, nonatomic) BOOL hasSuperConnections;
@property (nonatomic) _NUChannelPort *superport;
@property (readonly, nonatomic) _NUChannelPort *rootPort;
@property (readonly, nonatomic) NSArray *subports;
@property (readonly, nonatomic) NSString *compactDescription;
@property (readonly, nonatomic) id<NUChannelOutputPort> connectedOutputPort;
@property (readonly, nonatomic) BOOL hasExpression;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) NUChannel *channel;
@property (readonly, nonatomic) NUChannelFormat *effectiveFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *connectedInputPorts;

- (void)disconnect;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)_fullName;
- (void)_addOutputPort:(id)a0;
- (id)evaluateInputWithContext:(id)a0 error:(out id *)a1;
- (BOOL)bindData:(id)a0 error:(out id *)a1;
- (void)_populateAllSubports;
- (void)_removeOutputPort:(id)a0;
- (id)_subportMatching:(id)a0;
- (BOOL)assign:(id)a0 error:(out id *)a1;
- (BOOL)clearExpression:(out id *)a0;
- (void)connectToPort:(id)a0;
- (void)deleteAllConnections;
- (void)disconnectAll;
- (id)evaluateOutputWithContext:(id)a0 error:(out id *)a1;
- (BOOL)resetData:(out id *)a0;
- (void)specializeWithInputFormat:(id)a0;
- (void)specializeWithOutputFormat:(id)a0;
- (id)subportForKey:(id)a0;
- (id)subportMatching:(id)a0;

@end
