@class NSString, NSMutableArray;

@interface UARPStandaloneCommandReplyRecord : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_solicitedURLResponses;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *modelNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addResponseURL:(id)a0;
- (id)getResponseURLs;
- (id)initWithModelNumber:(id)a0;

@end
