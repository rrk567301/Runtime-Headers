@interface ALSCGreenClient : NSObject <ALSCGreenClientProtocol> {
    char _cachingAllowed;
}

@property (nonatomic) char key1Value;
@property (nonatomic) char key2Value;
@property (nonatomic) char key3Value;
@property (readonly, nonatomic) char valuesFinalized;

- (id)init;
- (char)_attemptReadingValuesFromDiskAndUpdateFileState;
- (char)_readGreenKeysFromDictionary:(id)a0;

@end
