@interface _SFTripleDESKeySpecifier : _SFSymmetricKeySpecifier {
    id _tripleDESKeySpecifierInternal;
}

+ (Class)keyClass;

- (long long)keyLengthInBytes;
- (void).cxx_destruct;

@end
