@class NSString, NSArray, ASAAudioFormat;

@interface ASAStream : ASAObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isInput) char input;
@property (readonly, nonatomic, getter=isOutput) char output;
@property (readonly, nonatomic) unsigned int terminalType;
@property (readonly, nonatomic) unsigned int startingChannel;
@property (readonly, nonatomic) unsigned int latency;
@property (copy, nonatomic) ASAAudioFormat *virtualFormat;
@property (copy, nonatomic) ASAAudioFormat *physicalFormat;
@property (readonly, copy, nonatomic) NSArray *availableVirtualFormats;
@property (readonly, copy, nonatomic) NSArray *availablePhysicalFormats;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic, getter=isVirtualFormatSettable) char virtualFormatSettable;
@property (readonly, nonatomic, getter=isPhysicalFormatSettable) char physicalFormatSettable;
@property (readonly, nonatomic, getter=isTapStream) char tapStream;

- (id)name;
- (void)setName:(id)a0;
- (unsigned int)latency;
- (unsigned int)terminalType;
- (unsigned int)startingChannel;
- (void)setPhysicalFormat:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (id)physicalFormat;
- (id)availablePhysicalFormats;
- (id)availableVirtualFormats;
- (id)controlObjectIDs;
- (id)coreAudioClassName;
- (void)setVirtualFormat:(id)a0;
- (id)virtualFormat;

@end
