@class NSMutableData, NSMutableString;

@interface IMAPClientData : NSObject

@property (retain) NSMutableData *data;
@property (retain) NSMutableString *commandString;
@property (retain) IMAPClientData *nextData;
@property struct _NSRange { unsigned long long location; unsigned long long length; } dontLogRange;
@property char isFrozen;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)freeze;
- (void)addDataArgument:(id)a0 literalPlus:(char)a1;
- (void)addStringArgument:(id)a0;
- (id)initWithStringWaitingForArguments:(id)a0;

@end
