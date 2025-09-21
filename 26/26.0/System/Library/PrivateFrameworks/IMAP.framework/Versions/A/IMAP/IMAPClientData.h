@class NSMutableData, NSMutableString;

@interface IMAPClientData : NSObject

@property (retain) NSMutableData *data;
@property (retain) NSMutableString *commandString;
@property (retain) IMAPClientData *nextData;
@property struct _NSRange { unsigned long long location; unsigned long long length; } dontLogRange;
@property BOOL isFrozen;

- (id)initWithData:(id)a0;
- (void)freeze;
- (id)init;
- (void).cxx_destruct;
- (void)addDataArgument:(id)a0 literalPlus:(BOOL)a1;
- (void)addStringArgument:(id)a0;
- (id)initWithStringWaitingForArguments:(id)a0;

@end
