@class NSData, NSDate;

@interface MADChangeTokenEntry : NSObject

@property (nonatomic) unsigned long long tokenID;
@property (nonatomic) unsigned long long tokenType;
@property (copy, nonatomic) NSData *tokenData;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) int version;

+ (id)entryWithTokenID:(unsigned long long)a0 tokenType:(unsigned long long)a1 tokenData:(id)a2 date:(id)a3 version:(int)a4;

- (void).cxx_destruct;
- (id)initWithTokenID:(unsigned long long)a0 tokenType:(unsigned long long)a1 tokenData:(id)a2 date:(id)a3 version:(int)a4;

@end
