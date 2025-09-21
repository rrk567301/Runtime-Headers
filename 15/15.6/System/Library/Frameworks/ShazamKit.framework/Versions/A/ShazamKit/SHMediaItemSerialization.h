@interface SHMediaItemSerialization : NSObject

+ (id)dateFormatter;
+ (char)isInternalMediaItemProperty:(id)a0;
+ (id)propertiesFromSerializationFormat:(id)a0 error:(id *)a1;
+ (id)serializationFormatForProperties:(id)a0 error:(id *)a1;
+ (id)serializedFormatFromArrayValues:(id)a0 property:(id)a1;
+ (id)transformArrayValue:(id)a0 property:(id)a1 shouldSerialize:(char)a2;
+ (id)transformProperties:(id)a0 toSerializationFormat:(char)a1 error:(id *)a2;
+ (id)transformValue:(id)a0 forProperty:(id)a1 toSerializationFormat:(char)a2 error:(id *)a3;

@end
