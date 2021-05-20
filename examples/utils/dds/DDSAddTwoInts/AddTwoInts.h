// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file AddTwoInts.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _ADDTWOINTS_H_
#define _ADDTWOINTS_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(AddTwoInts_SOURCE)
#define AddTwoInts_DllAPI __declspec( dllexport )
#else
#define AddTwoInts_DllAPI __declspec( dllimport )
#endif // AddTwoInts_SOURCE
#else
#define AddTwoInts_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define AddTwoInts_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure AddTwoInts_Request defined by the user in the IDL file.
 * @ingroup ADDTWOINTS
 */
class AddTwoInts_Request
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport AddTwoInts_Request();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~AddTwoInts_Request();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AddTwoInts_Request that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Request(
            const AddTwoInts_Request& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AddTwoInts_Request that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Request(
            AddTwoInts_Request&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AddTwoInts_Request that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Request& operator =(
            const AddTwoInts_Request& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AddTwoInts_Request that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Request& operator =(
            AddTwoInts_Request&& x);

    /*!
     * @brief This function sets a value in member a
     * @param _a New value for member a
     */
    eProsima_user_DllExport void a(
            int64_t _a);

    /*!
     * @brief This function returns the value of member a
     * @return Value of member a
     */
    eProsima_user_DllExport int64_t a() const;

    /*!
     * @brief This function returns a reference to member a
     * @return Reference to member a
     */
    eProsima_user_DllExport int64_t& a();

    /*!
     * @brief This function sets a value in member b
     * @param _b New value for member b
     */
    eProsima_user_DllExport void b(
            int64_t _b);

    /*!
     * @brief This function returns the value of member b
     * @return Value of member b
     */
    eProsima_user_DllExport int64_t b() const;

    /*!
     * @brief This function returns a reference to member b
     * @return Reference to member b
     */
    eProsima_user_DllExport int64_t& b();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const AddTwoInts_Request& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int64_t m_a;
    int64_t m_b;
};
/*!
 * @brief This class represents the structure AddTwoInts_Response defined by the user in the IDL file.
 * @ingroup ADDTWOINTS
 */
class AddTwoInts_Response
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport AddTwoInts_Response();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~AddTwoInts_Response();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object AddTwoInts_Response that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Response(
            const AddTwoInts_Response& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object AddTwoInts_Response that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Response(
            AddTwoInts_Response&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object AddTwoInts_Response that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Response& operator =(
            const AddTwoInts_Response& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object AddTwoInts_Response that will be copied.
     */
    eProsima_user_DllExport AddTwoInts_Response& operator =(
            AddTwoInts_Response&& x);

    /*!
     * @brief This function sets a value in member sum
     * @param _sum New value for member sum
     */
    eProsima_user_DllExport void sum(
            int64_t _sum);

    /*!
     * @brief This function returns the value of member sum
     * @return Value of member sum
     */
    eProsima_user_DllExport int64_t sum() const;

    /*!
     * @brief This function returns a reference to member sum
     * @return Reference to member sum
     */
    eProsima_user_DllExport int64_t& sum();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const AddTwoInts_Response& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    int64_t m_sum;
};

#endif // _ADDTWOINTS_H_