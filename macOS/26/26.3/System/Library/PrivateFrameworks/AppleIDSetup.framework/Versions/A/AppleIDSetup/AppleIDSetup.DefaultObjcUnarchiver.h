@interface AppleIDSetup.DefaultObjcUnarchiver : NSKeyedUnarchiver {
    void /* unknown type, empty encoding */ decoder;
}

- (id)decodeObjectForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initForReadingFromData:(id)a0 error:(id *)a1;
- (id)initForReadingWithData:(id)a0;

@end
