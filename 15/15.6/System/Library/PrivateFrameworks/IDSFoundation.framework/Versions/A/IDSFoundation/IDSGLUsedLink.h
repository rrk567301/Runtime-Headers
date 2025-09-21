@class NSString;

@interface IDSGLUsedLink : NSObject

@property unsigned int linkID;
@property (retain) NSString *localIP;
@property (retain) NSString *serverIP;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
