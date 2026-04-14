@class NSString;

@interface IDSGLUsedLink : NSObject

@property unsigned int linkID;
@property (retain) NSString *localIP;
@property (retain) NSString *serverIP;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
