@class BMStream, BMSource;

@interface LBFBiomeManager : NSObject

@property (readonly, nonatomic) BMStream *biomeStream;
@property (retain, nonatomic) BMSource *biomeSource;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (BOOL)writeData:(id)a0;
- (id)readData:(double)a0 endDate:(id)a1;

@end
