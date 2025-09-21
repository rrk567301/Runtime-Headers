@class NSString, NSArray;

@interface PFAssertionInfo : NSObject

@property SEL selector;
@property (retain) Class objectClass;
@property char isClassMethod;
@property (retain) NSString *functionName;
@property (retain) NSString *fileName;
@property unsigned long long lineNumber;
@property (retain) NSString *message;
@property (retain) NSArray *backtrace;
@property char isFatal;

- (id)description;
- (void).cxx_destruct;
- (char)isWarning;
- (id)prettyMethodName;

@end
