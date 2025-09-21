@class NSString, ICNFMCError;

@interface ICNFIMAPResponse : NSObject

@property (nonatomic) char wasHandled;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) ICNFMCError *error;
@property (readonly, nonatomic) char isUntagged;

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;
+ (id)newIMAPResponseWithConnection:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;

@end
