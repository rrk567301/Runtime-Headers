@class NSString;

@interface _ICNFMCMimeEnrichedWriterCommandStackEntry : NSObject

@property (weak, nonatomic) NSString *command;
@property (nonatomic) unsigned long long attrStringIndex;
@property (retain, nonatomic) id parameter;
@property (retain, nonatomic) _ICNFMCMimeEnrichedWriterCommandStackEntry *parent;

- (void).cxx_destruct;
- (id)init;

@end
