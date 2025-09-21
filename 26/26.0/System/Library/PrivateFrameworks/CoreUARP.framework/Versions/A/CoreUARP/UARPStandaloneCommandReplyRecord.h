@class NSString, NSMutableArray;

@interface UARPStandaloneCommandReplyRecord : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_solicitedURLResponses;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *modelNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addResponseURL:(id)a0;
- (id)getResponseURLs;
- (id)initWithModelNumber:(id)a0;

@end
