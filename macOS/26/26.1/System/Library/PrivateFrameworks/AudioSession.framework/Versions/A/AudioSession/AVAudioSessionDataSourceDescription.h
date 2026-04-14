@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {
    void *_impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSArray *supportedPolarPatterns;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSString *preferredPolarPattern;

+ (id)privateCreateArray:(id)a0 portID:(id)a1 sessionID:(unsigned int)a2;

- (unsigned long long)hash;
- (id)initWithSessionID:(unsigned int)a0;
- (void)configurePolarPatterns:(id)a0;
- (BOOL)setPreferredPolarPattern:(id)a0 error:(id *)a1;
- (id)privateGetOwningPortID;
- (struct DataSourceDescriptionImpl { unsigned int x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; } *)privateGetImplementation;
- (id)initWithRawSourceDescription:(id)a0 andOwningPortID:(id)a1 andSessionID:(unsigned int)a2;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToDataSource:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
