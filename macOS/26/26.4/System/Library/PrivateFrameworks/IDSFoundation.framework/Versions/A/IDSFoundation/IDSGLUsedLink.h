@class NSString;

@interface IDSGLUsedLink : NSObject

@property unsigned int linkID;
@property (retain) NSString *localIP;
@property (retain) NSString *serverIP;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
