@class NSArray;

@interface MIDIUMPMutableEndpoint : MIDIUMPEndpoint

@property (copy, nonatomic) NSArray *mutableFunctionBlocks;
@property (readonly, nonatomic) char isEnabled;

+ (id)description;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)setEnabled:(char)a0 error:(id *)a1;
- (char)registerWithServer;
- (char)changeStreamProtocol:(int)a0;
- (char)deserialize:(id)a0;
- (char)disableFunctionBlock:(id)a0;
- (char)enableFunctionBlock:(id)a0;
- (id)initWithName:(id)a0 deviceInfo:(id)a1 productInstanceID:(id)a2 MIDIProtocol:(int)a3 destinationCallback:(id /* block */)a4;
- (char)registerFunctionBlocks:(id)a0 markAsStatic:(char)a1 error:(id *)a2;
- (id)serializeDescription;
- (char)setName:(id)a0 error:(id *)a1;

@end
