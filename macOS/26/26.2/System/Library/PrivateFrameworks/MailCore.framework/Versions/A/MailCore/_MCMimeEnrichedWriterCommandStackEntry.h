@class NSString;

@interface _MCMimeEnrichedWriterCommandStackEntry : NSObject

@property (weak, nonatomic) NSString *command;
@property (nonatomic) unsigned long long attrStringIndex;
@property (retain, nonatomic) id parameter;
@property (retain, nonatomic) _MCMimeEnrichedWriterCommandStackEntry *parent;

- (void).cxx_destruct;
- (id)init;

@end
